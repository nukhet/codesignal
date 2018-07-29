int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    return (desiredHeight <= upSpeed) ? 1: (desiredHeight - upSpeed - 1) / (upSpeed - downSpeed) + 2;
}
