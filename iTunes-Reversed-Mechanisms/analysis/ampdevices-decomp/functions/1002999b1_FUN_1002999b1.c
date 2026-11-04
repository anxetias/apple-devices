// name: FUN_1002999b1
// address: 1002999b1

undefined8
FUN_1002999b1(long param_1,undefined8 param_2,char *param_3,char *param_4,int *param_5,
             undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9,
             undefined4 param_10)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char local_13c [4];
  char local_138;
  byte abStack_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_7 < 0x54454e43) {
    if (param_7 < 0x434f4d4d) {
      if ((param_7 != 0x434f4d00) && (param_7 != 0x434f4d20)) goto LAB_100299be6;
    }
    else if (param_7 != 0x434f4d4d) {
      if ((param_7 != 0x54454e00) && (param_7 != 0x54454e20)) goto LAB_100299be6;
      goto LAB_100299bc6;
    }
    if ((param_4 != (char *)0x0) && (*param_4 == '\0')) {
      cVar1 = FUN_10042803e(param_9,param_10,"\riTunes_CDDB_1",&local_138);
      cVar2 = '\x01';
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_10042803e(param_9,param_10,"\x17iTunes_CDDB_TrackNumber",&local_138),
         cVar1 == '\0')) {
        cVar2 = FUN_10042803e(param_9,param_10,"\x0fiTunes_CDDB_IDs",&local_138);
      }
      *param_4 = cVar2;
    }
    if ((param_3 != (char *)0x0) && (*param_3 == '\0')) {
      FUN_100427e75(param_1 + 4,param_9,param_10,param_3,0xff);
      if (*param_3 == '\0') {
        FUN_100428138(param_1 + 4,param_9,param_10,param_3 + 1,0xfe,local_13c);
        *param_3 = local_13c[0];
      }
      iVar3 = _strncmp(param_3 + 1,"MusicMatch",10);
      if ((iVar3 == 0) || (iVar3 = _strncmp(param_3 + 1,"Amazon.com",10), iVar3 == 0)) {
        *param_3 = '\n';
        if (param_4 != (char *)0x0) {
          *param_4 = '\x01';
        }
      }
      else {
        *param_3 = '\0';
      }
    }
  }
  else {
    if (param_7 < 0x54535300) {
      if (param_7 != 0x54454e43) {
        if ((param_7 == 0x544c454e) && (param_5 != (int *)0x0)) {
          local_138 = '\0';
          FUN_1004272d9(param_1 + 4,param_9,param_10,&local_138,0xff);
          if (local_138 == '\0') {
            iVar3 = 0;
          }
          else {
            lVar4 = 0;
            iVar3 = 0;
            do {
              iVar3 = (uint)abStack_137[lVar4] + iVar3 * 10 + -0x30;
              lVar4 = lVar4 + 1;
            } while (local_138 != (char)lVar4);
          }
          *param_5 = iVar3;
        }
        goto LAB_100299be6;
      }
    }
    else if (((param_7 != 0x54535300) && (param_7 != 0x54535345)) && (param_7 != 0x54535320))
    goto LAB_100299be6;
LAB_100299bc6:
    if (param_3 != (char *)0x0) {
      FUN_1004272d9(param_1 + 4,param_9,param_10,param_3,0xff);
    }
  }
LAB_100299be6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

