// name: FUN_1003797c0
// address: 1003797c0

void FUN_1003797c0(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (*(long *)(param_1 + 0x18 + uVar1 * 8) != 0) {
    _AFCConnectionInvalidate();
    FUN_10017060f(*(undefined8 *)(param_1 + 0x18 + uVar1 * 8));
    *(undefined8 *)(param_1 + 0x18 + uVar1 * 8) = 0;
  }
  if (*(long *)(param_1 + 8 + uVar1 * 8) != 0) {
    _AMDServiceConnectionInvalidate();
    FUN_10017060f(*(undefined8 *)(param_1 + 8 + uVar1 * 8));
    *(undefined8 *)(param_1 + 8 + uVar1 * 8) = 0;
  }
  return;
}

