// name: FUN_100467396
// address: 100467396

void FUN_100467396(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                  uint *param_11,uint *param_12,uint *param_13,uint *param_14,uint *param_15)

{
  *param_2 = (uint)((param_1 & 0x101) != 0);
  *param_3 = param_1 >> 3 & 1;
  *param_4 = param_1 >> 5 & 1;
  *param_5 = param_1 >> 1 & 1;
  *param_6 = param_1 >> 6 & 1;
  *param_7 = param_1 >> 10 & 1;
  *param_8 = (uint)((param_1 & 0x1004000) != 0);
  *param_9 = param_1 >> 2 & 1;
  *param_10 = param_1 >> 0x15 & 1;
  *param_11 = param_1 >> 0xf & 1;
  *param_12 = param_1 >> 0x14 & 1;
  *param_13 = param_1 >> 4 & 1;
  *param_14 = param_1 >> 0x10 & 1;
  *param_15 = (uint)((param_1 & 0xc00000) != 0);
  return;
}

