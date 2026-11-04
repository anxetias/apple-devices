// name: FUN_1001ad2ce
// address: 1001ad2ce

void FUN_1001ad2ce(void)

{
  long lVar1;
  int iVar2;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  iVar2 = 0;
  do {
    lVar1 = FUN_1001ad188(iVar2);
    if ((lVar1 != 0) && (local_40 = *(long *)(lVar1 + 0x58), local_40 != 0)) {
      local_48 = &local_40;
      lVar1 = FUN_10033d31a(&DAT_10089fae0,&local_40,&DAT_100712240,&local_48,&local_31);
      *(int *)(lVar1 + 0x28) = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x7d);
  return;
}

