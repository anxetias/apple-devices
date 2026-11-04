// name: FUN_1002a8ff1
// address: 1002a8ff1

void FUN_1002a8ff1(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x138) != 0) {
    FUN_10042ae71(param_1,0x434f4d4d,param_2 + 0x38);
    FUN_10042ae71(param_1,0x434f4d20,param_2 + 0x38);
    uVar1 = 0x434f4d20;
    if (2 < *(byte *)(param_1 + 0xb)) {
      uVar1 = 0x434f4d4d;
    }
    FUN_10042b0c7(param_1,uVar1,param_2 + 0x39,*(undefined1 *)(param_2 + 0x38),
                  *(undefined8 *)(param_2 + 0x138),*(undefined4 *)(param_2 + 0x140));
    return;
  }
  return;
}

