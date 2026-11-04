// name: FUN_100446d0e
// address: 100446d0e

void FUN_100446d0e(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x540) != param_2) {
    uVar1 = FUN_1001705fc(param_2);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x540));
    *(undefined8 *)(param_1 + 0x540) = uVar1;
  }
  return;
}

