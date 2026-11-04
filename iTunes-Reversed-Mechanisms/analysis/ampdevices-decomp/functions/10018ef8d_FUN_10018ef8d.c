// name: FUN_10018ef8d
// address: 10018ef8d

void FUN_10018ef8d(char *param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_10018dce1((char *)(param_2 + 0x58),param_3);
  *(undefined4 *)(param_3 + 0x41c) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_3 + 0x18) = 1;
  *(undefined2 *)(param_3 + 4) = 6;
  iVar2 = _strcmp(param_1,(char *)(param_2 + 0x58));
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069362c(uVar3);
    }
    FUN_1001782e9(1,0);
  }
  return;
}

