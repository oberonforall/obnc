/*GENERATED BY OBNC 0.8.4*/

#ifndef Files_h
#define Files_h

#include "/home/gunter/GM_LANGUAGES/OBERON/V_07/OBNC/obnc-0.8.4/lib/obnc/OBNC_.h"

typedef struct Files_Handle_ *Files_File_;

typedef struct Files_Handle_ {
	int dummy;
} Files_Handle_;

struct Files_Handle_Heap {
	const OBNC_Td *td;
	struct Files_Handle_ fields;
};

extern const int Files_Handle_id;
extern const int *const Files_Handle_ids[1];
extern const OBNC_Td Files_Handle_td;

typedef struct Files_Rider_ {
	int eof_;
	int res_;
	Files_File_ base_;
	int pos_;
} Files_Rider_;

struct Files_Rider_Heap {
	const OBNC_Td *td;
	struct Files_Rider_ fields;
};

extern const int Files_Rider_id;
extern const int *const Files_Rider_ids[1];
extern const OBNC_Td Files_Rider_td;

#define Files_Old_ obnc_Files_Old_
Files_File_ Files_Old_(const char name_[], int name_len);

#define Files_New_ obnc_Files_New_
Files_File_ Files_New_(const char name_[], int name_len);

#define Files_Register_ obnc_Files_Register_
void Files_Register_(Files_File_ f_);

#define Files_Close_ obnc_Files_Close_
void Files_Close_(Files_File_ f_);

#define Files_Purge_ obnc_Files_Purge_
void Files_Purge_(Files_File_ f_);

#define Files_Delete_ obnc_Files_Delete_
void Files_Delete_(const char name_[], int name_len, int *res_);

#define Files_Rename_ obnc_Files_Rename_
void Files_Rename_(const char old_[], int old_len, const char new_[], int new_len, int *res_);

#define Files_Length_ obnc_Files_Length_
int Files_Length_(Files_File_ f_);

#define Files_GetDate_ obnc_Files_GetDate_
void Files_GetDate_(Files_File_ f_, int *t_, int *d_);

#define Files_Set_ obnc_Files_Set_
void Files_Set_(Files_Rider_ *r_, const OBNC_Td *r_td, Files_File_ f_, int pos_);

#define Files_Pos_ obnc_Files_Pos_
int Files_Pos_(Files_Rider_ *r_, const OBNC_Td *r_td);

#define Files_Base_ obnc_Files_Base_
Files_File_ Files_Base_(Files_Rider_ *r_, const OBNC_Td *r_td);

#define Files_Read_ obnc_Files_Read_
void Files_Read_(Files_Rider_ *r_, const OBNC_Td *r_td, unsigned char *x_);

#define Files_ReadInt_ obnc_Files_ReadInt_
void Files_ReadInt_(Files_Rider_ *r_, const OBNC_Td *r_td, int *i_);

#define Files_ReadReal_ obnc_Files_ReadReal_
void Files_ReadReal_(Files_Rider_ *r_, const OBNC_Td *r_td, double *x_);

#define Files_ReadNum_ obnc_Files_ReadNum_
void Files_ReadNum_(Files_Rider_ *r_, const OBNC_Td *r_td, int *i_);

#define Files_ReadString_ obnc_Files_ReadString_
void Files_ReadString_(Files_Rider_ *r_, const OBNC_Td *r_td, char s_[], int s_len);

#define Files_ReadSet_ obnc_Files_ReadSet_
void Files_ReadSet_(Files_Rider_ *r_, const OBNC_Td *r_td, unsigned int *s_);

#define Files_ReadBool_ obnc_Files_ReadBool_
void Files_ReadBool_(Files_Rider_ *r_, const OBNC_Td *r_td, int *b_);

#define Files_ReadBytes_ obnc_Files_ReadBytes_
void Files_ReadBytes_(Files_Rider_ *r_, const OBNC_Td *r_td, unsigned char buf_[], int buf_len, int n_);

#define Files_Write_ obnc_Files_Write_
void Files_Write_(Files_Rider_ *r_, const OBNC_Td *r_td, unsigned char x_);

#define Files_WriteInt_ obnc_Files_WriteInt_
void Files_WriteInt_(Files_Rider_ *r_, const OBNC_Td *r_td, int i_);

#define Files_WriteReal_ obnc_Files_WriteReal_
void Files_WriteReal_(Files_Rider_ *r_, const OBNC_Td *r_td, double x_);

#define Files_WriteNum_ obnc_Files_WriteNum_
void Files_WriteNum_(Files_Rider_ *r_, const OBNC_Td *r_td, int i_);

#define Files_WriteString_ obnc_Files_WriteString_
void Files_WriteString_(Files_Rider_ *r_, const OBNC_Td *r_td, const char s_[], int s_len);

#define Files_WriteSet_ obnc_Files_WriteSet_
void Files_WriteSet_(Files_Rider_ *r_, const OBNC_Td *r_td, unsigned int s_);

#define Files_WriteBool_ obnc_Files_WriteBool_
void Files_WriteBool_(Files_Rider_ *r_, const OBNC_Td *r_td, int b_);

#define Files_WriteBytes_ obnc_Files_WriteBytes_
void Files_WriteBytes_(Files_Rider_ *r_, const OBNC_Td *r_td, unsigned char buf_[], int buf_len, int n_);

#define Files_Init obnc_Files_Init
void Files_Init(void);

#endif