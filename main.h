#ifndef CODE_REVIEW_BASE64_H
#define CODE_REVIEW_BASE64_H

/* base64 encode function */
char *Base64Encode(const void *data, int size);

/* base64 decode function */
char *Base64Decode(const char *str);

#endif /* CODE_REVIEW_BASE64_H */

#ifndef CODE_REVIEW_UU_H
#define CODE_REVIEW_UU_H

/* uuencode functions */
void Encode (FILE *fp);

/* uudecode functions */
int Decode (char *filename, FILE *fpin);

#endif /* CODE_REVIEW_UU_H */
