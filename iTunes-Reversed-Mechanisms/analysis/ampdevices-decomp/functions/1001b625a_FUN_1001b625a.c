// name: FUN_1001b625a
// address: 1001b625a

void FUN_1001b625a(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined1 local_29;
  
  if (*param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a13c3(uVar3);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') {
      return;
    }
  }
  local_38 = param_3;
  lVar1 = FUN_1001b7380(param_1 + 0x28,param_3,&DAT_100712240,&local_38,&local_29);
  FUN_1001b644e(lVar1 + 0x30,param_2);
  return;
}

