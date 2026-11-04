// name: FUN_1004e7c10
// address: 1004e7c10

void FUN_1004e7c10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x14cd0;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  FUN_1002bd7f7(param_2,*(undefined1 *)(param_1 + 0x347),*(undefined1 *)(param_1 + 0x348),
                *(undefined2 *)(param_1 + 0x34a),*(undefined1 *)(lVar1 + 0x11b),
                -(DAT_100700b50 == *(float *)(param_1 + 0x66a4)) & 1,*(undefined8 *)(param_1 + 0x30)
               );
  return;
}

