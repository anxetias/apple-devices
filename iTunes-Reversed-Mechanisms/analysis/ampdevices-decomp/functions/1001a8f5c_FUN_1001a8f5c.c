// name: FUN_1001a8f5c
// address: 1001a8f5c

void FUN_1001a8f5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = _CFDictionaryCreateMutable
                    (DAT_1008c4d98,param_2,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

