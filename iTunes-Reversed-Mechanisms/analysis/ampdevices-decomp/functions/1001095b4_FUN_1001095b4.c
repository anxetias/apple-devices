// name: FUN_1001095b4
// address: 1001095b4

/* WARNING: Removing unreachable block (ram,0x0001001095f8) */

void FUN_1001095b4(undefined8 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  FUN_1001194e4();
  *param_1 = &PTR_FUN_10082ff98;
  pvVar2 = operator_new(0x668);
  param_1[0x3c6] = pvVar2;
  ___bzero(pvVar2,0x668);
  for (uVar1 = 0x1f; 0xfU >> uVar1 == 0; uVar1 = uVar1 - 1) {
  }
  uVar3 = _vDSP_create_fftsetup(0x20 - (uVar1 ^ 0x1f),0);
  param_1[0x3c5] = uVar3;
  return;
}

