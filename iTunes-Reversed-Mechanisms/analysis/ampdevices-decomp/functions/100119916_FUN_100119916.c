// name: FUN_100119916
// address: 100119916

void FUN_100119916(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined1 param_8)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_7;
  **(undefined8 **)(param_1 + 0x48 + uVar1 * 8) = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x48 + uVar1 * 8) + 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x48 + uVar1 * 8) + 0x10) = param_4;
  *(undefined8 *)(*(long *)(param_1 + 0x48 + uVar1 * 8) + 0x18) = param_5;
  *(undefined8 *)(*(long *)(param_1 + 0x48 + uVar1 * 8) + 0x20) = param_6;
  *(undefined1 *)(*(long *)(param_1 + 0x48 + uVar1 * 8) + 0x28) = param_8;
  return;
}

