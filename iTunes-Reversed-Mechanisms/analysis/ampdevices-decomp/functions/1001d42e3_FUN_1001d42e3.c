// name: FUN_1001d42e3
// address: 1001d42e3

void FUN_1001d42e3(undefined2 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_2 + 8);
  *(undefined2 *)(param_2 + 0x7c) = *param_1;
  iVar3 = FUN_1001eacad(param_2,lVar1 + 0x9b8);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b3934(iVar3,uVar4);
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0x43534650;
  FUN_1001eac02(param_2,lVar1 + 0x998);
  FUN_1001d4365(lVar1);
  return;
}

