// name: FUN_1004c527e
// address: 1004c527e

void FUN_1004c527e(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 *local_48;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_100166802(lVar1,*param_2);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1001aa080(local_58,param_2);
    local_40 = 0;
    local_48 = local_58;
    FUN_1001aa318(&local_38);
    lVar1 = FUN_1001a7bfa(local_58);
    FUN_1001aa318(local_60);
    for (; (local_48 != local_58 || (local_40 != lVar1)); local_40 = local_40 + 1) {
      FUN_1001a7f52(local_30);
      FUN_1001aaadc(&local_38,local_30);
      FUN_1001ab240(local_30);
      FUN_1004c51fc(param_1,local_38);
    }
    FUN_1001ab240(local_60);
    FUN_1001ab240(&local_38);
    FUN_1001a7a94(local_58);
  }
  return;
}

