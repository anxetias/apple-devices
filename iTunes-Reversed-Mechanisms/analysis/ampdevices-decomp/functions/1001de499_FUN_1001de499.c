// name: FUN_1001de499
// address: 1001de499

int FUN_1001de499(undefined8 param_1,ulong param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  long lVar4;
  int local_34;
  
  local_34 = (int)((ulong)in_RAX >> 0x20);
  *param_3 = 0;
  if ((int)param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1001de2b7(param_1,param_2,0,&local_34,0x7fffffff);
    if (iVar2 == 0) {
      lVar4 = FUN_1001c63e1((long)local_34 + 2);
      *param_3 = lVar4;
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b96e7(uVar3);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        iVar2 = FUN_1001de2b7(param_1,param_2 & 0xffffffff,lVar4,&local_34,local_34);
        *(undefined2 *)(*param_3 + (long)(local_34 >> 1) * 2) = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b967b(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

