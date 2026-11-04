// name: FUN_1003f625f
// address: 1003f625f

void FUN_1003f625f(long param_1,undefined8 param_2,uint param_3,uint param_4,long *param_5)

{
  long lVar1;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined8 local_38;
  
  local_38 = param_2;
  FUN_1001c62d9(&local_50,0x18);
  local_50 = 0x18646f686d;
  local_48 = param_3 + 0x18;
  local_44 = param_4;
  if (*(char *)(param_1 + 0x100127) != '\0') {
    local_50 = 0x180000006d686f64;
    local_48 = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
               local_48 * 0x1000000;
    local_44 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
               param_4 << 0x18;
  }
  lVar1 = *param_5;
  FUN_1001c631b(&local_50,lVar1,0x18);
  FUN_1001c631b(local_38,lVar1 + 0x18,(ulong)param_3);
  *param_5 = lVar1 + (ulong)param_3 + 0x18;
  return;
}

