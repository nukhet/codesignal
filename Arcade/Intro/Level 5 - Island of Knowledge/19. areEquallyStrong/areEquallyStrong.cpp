bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    return ((yourLeft==friendsLeft) && (yourRight==friendsRight) ||
            (yourLeft==friendsRight) && (yourRight==friendsLeft));
}
