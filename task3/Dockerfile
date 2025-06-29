# Используем официальный образ с установленным Drogon и компилятором
FROM ubuntu:22.04

# Установка зависимостей
RUN apt-get update && \
  apt-get install -y git cmake build-essential libssl-dev uuid-dev curl pkg-config

# Устанавливаем Drogon через vcpkg
RUN git clone https://github.com/microsoft/vcpkg.git  && \
  cd vcpkg && \
  ./bootstrap-vcpkg.sh && \
  ./vcpkg install drogon

ENV PATH="/vcpkg:${PATH}"
ENV VCPKG_ROOT=/vcpkg
# Копируем исходники
WORKDIR /app
COPY . .

# Сборка приложения
RUN rm -R build && mkdir build && cd build && cmake .. && make

# Запуск сервера
CMD ["./build/hello-server"]
