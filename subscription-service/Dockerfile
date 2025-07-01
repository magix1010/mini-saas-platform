FROM gcc:12

RUN apt-get update && apt-get install -y \
libboost-all-dev cmake libpq-dev git curl

WORKDIR /app
COPY . .
RUN cmake . && make   # Build the project

CMD ["./subscription-service"]