// name: FUN_10020fc18
// address: 10020fc18

undefined8 FUN_10020fc18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffef;
  if (*(int *)(param_1 + 0x2ad4) == 0) {
    FUN_10020fb16();
    *(undefined2 *)(param_1 + 0x21e8) = 0;
    FUN_1001b811c(param_1 + 0x23e8);
    *(undefined8 *)(param_1 + 0x21b8) = 0xffffffffffffffff;
    ___bzero(param_1 + 0x23f8,0x421);
    if (*(long *)(param_1 + 0x2820) != 0) {
      _AMRAuthInstallFinalize();
      FUN_10017060f(*(undefined8 *)(param_1 + 0x2820));
      *(undefined8 *)(param_1 + 0x2820) = 0;
    }
    FUN_1001c62d9(param_1 + 0x2830,0x20);
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x2850) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x2858));
    *(undefined8 *)(param_1 + 0x2858) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x2860));
    *(undefined8 *)(param_1 + 0x2860) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x2828));
    *(undefined8 *)(param_1 + 0x2828) = 0;
  }
  return uVar1;
}

