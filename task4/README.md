build image:

```bash
docker build . -t server:latest
```

run image:

```bash
docker run server -p 8848:8848
```

how to load local image:
minikube image load <image name>

How to get SERVICE_URL var:
❯ SERVICE_URL=$(minikube service server-deploy-service --url | tr "," "\n" | head -n 1)
