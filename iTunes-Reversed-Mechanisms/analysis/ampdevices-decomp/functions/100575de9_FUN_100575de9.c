// name: FUN_100575de9
// address: 100575de9

undefined8 FUN_100575de9(uint param_1,long param_2)

{
  ulong in_RAX;
  ulong local_28;
  
  if (param_2 != 0) {
    local_28 = in_RAX;
    FUN_1001cebfc(param_2,&local_28);
    if (0 < (long)local_28) {
      FUN_1001cec46(param_2,((local_28 >> 1) * ((ulong)param_1 & 0xffff)) / 100);
    }
    if (*(char *)(param_2 + 0x48) != '\0') {
      return 0xffffff80;
    }
  }
  return 0;
}

