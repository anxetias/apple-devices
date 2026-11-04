// name: FUN_1001898d9
// address: 1001898d9

void FUN_1001898d9(long param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  char local_68;
  char local_67;
  
  iVar3 = FUN_10017d406(param_1,0,&local_68,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      uVar1 = *(ushort *)(param_1 + 4);
      if ((uVar1 & 7) == 0) {
        uVar5 = uVar1 | 4;
        if (local_67 == '\0') {
          uVar5 = uVar1;
        }
        *(ushort *)(param_1 + 4) = (uVar5 - (local_68 == '\0')) + 2;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_10068f23f(iVar3,uVar4);
      }
    }
  }
  return;
}

