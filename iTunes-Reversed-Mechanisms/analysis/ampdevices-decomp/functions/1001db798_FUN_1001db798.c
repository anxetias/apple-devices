// name: FUN_1001db798
// address: 1001db798

void FUN_1001db798(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar1 != 0) {
      FUN_1001732be(lVar1,0,0,0);
      FUN_10017339b(*(undefined8 *)(param_1 + 0x90),
                    *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10),
                    *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
    }
    iVar3 = FUN_10019bd70((long *)(param_1 + 0x90));
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b7d61(iVar3,uVar4);
      }
    }
  }
  return;
}

