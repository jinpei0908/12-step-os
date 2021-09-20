# 12-step-os

## build

```bash
docker run -it --rm -v "$PWD":/app -w /app kozos-build-server make clean
docker run -it --rm -v "$PWD":/app -w /app kozos-build-server make image
```

## write

```bash
cd ~/twelve-step-os/src/01/bootload/
make write
```

## connect

```bash
make connect
```
