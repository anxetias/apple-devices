// name: FUN_10061d843
// address: 10061d843

void FUN_10061d843(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    do {
      if ((*(char *)(lVar2 + 0x68) != '\0') && (lVar1 = FUN_10031b48b(lVar2), lVar1 != 0)) {
        *(undefined4 *)(lVar1 + 0xc) = 0;
      }
      lVar2 = lVar2 + 0x70;
    } while (lVar2 != param_1[1]);
  }
  return;
}

