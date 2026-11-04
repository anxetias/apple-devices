// name: FUN_10011153a
// address: 10011153a

undefined8 FUN_10011153a(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 2) != 0) {
    (**(code **)(param_1 + 4))
              (*(long *)(param_1 + 2),param_2,1,param_3,1,*param_1 & 0xffffff,param_4);
    return 0;
  }
  return 0x21737474;
}

