// name: FUN_1001d302b
// address: 1001d302b

int FUN_1001d302b(sqlite3 *param_1,char *param_2,callback *param_3,void *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = _sqlite3_exec(param_1,param_2,param_3,param_4,(char **)0x0);
  iVar4 = 0;
  if ((1 < uVar2 - 100) && (iVar4 = 0, uVar2 != 0)) {
    if (uVar2 == 4) {
      iVar4 = -0x80;
    }
    else {
      iVar4 = (uVar2 & 0xff) + 13000;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b2f5f(iVar4,uVar3);
      }
    }
  }
  return iVar4;
}

