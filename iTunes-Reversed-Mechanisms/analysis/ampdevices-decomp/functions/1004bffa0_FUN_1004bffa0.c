// name: FUN_1004bffa0
// address: 1004bffa0

undefined1 FUN_1004bffa0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 2;
  if ((*(char *)(DAT_1008c76a0 + 0x1a90) == '\0') && (*(int *)(param_1 + 0x18) != 0x44574e4c)) {
    if ((*(int *)(param_1 + 0x18) == 0x48545450) &&
       (cVar1 = FUN_1002b8874(param_1 + 0x488,*(undefined4 *)(param_1 + 0x484),0), cVar1 != '\0')) {
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

