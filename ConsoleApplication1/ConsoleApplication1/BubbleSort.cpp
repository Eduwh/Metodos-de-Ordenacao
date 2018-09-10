void bubbleSort(int vet[], int length) {
	int i, j, temp;
	for (i = 0; i < length - 1; i++) {
		for (j = (i + 1); j < length; j++) {
			if (vet[j] < vet[i]) {
				temp = vet[i];
				vet[i] = vet[j];
				vet[j] = temp;
			}
		}

	}
}
