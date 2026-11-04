// name: FUN_1001d4230
// address: 1001d4230

int FUN_1001d4230(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001c4b6c();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if ((*param_2 != 0) && (param_2[1] != 0)) {
        iVar2 = FUN_1001c4d49(param_1,*param_2,param_2[1] & 0xffffffff,(int)param_2[2],1);
        if (iVar2 == -0x80) {
          return -0x80;
        }
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_1006b385c(iVar2,uVar3);
          return iVar2;
        }
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b38c8(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

