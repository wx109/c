void del_string(char str[], char ch) {
	int i, j;
	for (i = 0,j=0; i < strlen(str); i++) {
		if (str[i] !=ch) {
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
}