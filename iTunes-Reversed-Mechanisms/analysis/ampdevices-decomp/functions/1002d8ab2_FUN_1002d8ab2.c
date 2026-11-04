// name: FUN_1002d8ab2
// address: 1002d8ab2

RSA * FUN_1002d8ab2(undefined8 param_1)

{
  char cVar1;
  RSA *pRVar2;
  uchar *local_138;
  uint local_12c;
  uchar local_128 [272];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100207779(param_1,&local_12c);
  if (cVar1 == '\0') {
    pRVar2 = (RSA *)0x0;
  }
  else {
    local_138 = local_128;
    pRVar2 = _d2i_RSAPublicKey((RSA **)0x0,&local_138,(ulong)local_12c);
    FUN_1001c62d9(&local_12c,0x114);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return pRVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

