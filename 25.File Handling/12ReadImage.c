#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    unsigned char *buffer;
    long file_size;

    // Open the image file in binary mode
    file = fopen("Gojo.jpg", "rb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Find the size of the file
    fseek(file, 0, SEEK_END);
    file_size = ftell(file);
    rewind(file);

    // Allocate memory to hold the file content
    buffer = (unsigned char *)malloc(file_size * sizeof(unsigned char));
    if (buffer == NULL) {
        printf("Memory error\n");
        fclose(file);
        return 1;
    }

    // Read the file into the buffer
    size_t result = fread(buffer, 1, file_size, file);
    if (result != file_size) {
        printf("Reading error\n");
        free(buffer);
        fclose(file);
        return 1;
    }

    // Now `buffer` contains the raw binary data of the image
    // You can process the buffer or save it to another file

    // Clean up
    fclose(file);
    free(buffer);

    printf("Image read successfully. Size: %ld bytes\n", file_size);

    return 0;
}
