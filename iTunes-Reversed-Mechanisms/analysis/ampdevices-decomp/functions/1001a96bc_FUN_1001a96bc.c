// name: FUN_1001a96bc
// address: 1001a96bc

void FUN_1001a96bc(long *param_1,long param_2)

{
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((*param_1 != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    FUN_1001aa23e(local_30);
    _CFDictionaryApplyFunction(*param_1,FUN_1001a968e,local_30);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1001ab240();
    FUN_1001ab240(&local_28);
  }
  return;
}

