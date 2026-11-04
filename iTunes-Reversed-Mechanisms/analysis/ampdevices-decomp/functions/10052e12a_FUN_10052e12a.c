// name: FUN_10052e12a
// address: 10052e12a

undefined8 FUN_10052e12a(long param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x78) = 0x44415448;
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  FUN_1001c631b(param_2 + 1,param_1 + 0x84,0x460);
  *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)((long)param_2 + 0x469);
  *(undefined4 *)(param_1 + 0x7c) = 0x7374726d;
  *(undefined8 *)(param_1 + 0x550) = param_3;
  *(undefined1 *)(param_1 + 0x558) = param_4;
  return 0;
}

