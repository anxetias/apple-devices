// name: FUN_100111efe
// address: 100111efe

undefined1 FUN_100111efe(long param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xa38) == 0) {
    if (*(uint *)(param_1 + 0xa3c) < 3) {
      if (param_2 != 1) {
        if (*(int *)(param_1 + 0xb20) != 0) {
          return 0x66;
        }
        if (*(char *)(param_1 + 0xb1c) != '\0') {
          return 0x66;
        }
        *(undefined4 *)(param_1 + 0xa38) = 1;
        return 0x66;
      }
      goto LAB_100111f4a;
    }
    uVar1 = *(uint *)(param_1 + 0xa3c) + *(int *)(param_1 + 0xa40);
    if (uVar1 < 5) {
      return 0x73;
    }
    if (uVar1 + *(int *)(param_1 + 0xa44) < 8) {
      return 0x62;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xa34);
  if (2 < uVar1) {
    if (uVar1 < 5) {
      return 0x73;
    }
    if (uVar1 < 8) {
      return 0x62;
    }
    return 0;
  }
  if (param_2 != 1) {
    if (*(int *)(param_1 + 0xb20) != 0) {
      return 0x66;
    }
    if (*(char *)(param_1 + 0xb1c) != '\0') {
      return 0x66;
    }
    *(int *)(param_1 + 0xa38) = *(int *)(param_1 + 0xa38) + 1;
    return 0x66;
  }
LAB_100111f4a:
  *(undefined1 *)(param_1 + 0xb1c) = 1;
  return 0x66;
}

