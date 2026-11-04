// name: FUN_1001ac82e
// address: 1001ac82e

void FUN_1001ac82e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  uint param_5,undefined4 param_6,undefined8 *param_7,char param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long local_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_34;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  uVar2 = DAT_1008c4d98;
  local_48 = param_1;
  local_34 = param_6;
  local_40 = (long *)FUN_1001b8c6c(param_4,DAT_1008c4d98);
  puVar3 = (undefined8 *)PTR__kCFHTTPVersion1_1_10082d5c8;
  if (param_5 < 3) {
    puVar3 = (undefined8 *)(&PTR__kCFHTTPVersion1_0_10083c9d0)[param_5];
  }
  lVar1 = _CFHTTPMessageCreateRequest(uVar2,local_40,*param_3,*puVar3);
  FUN_10016d588(&local_40);
  local_40 = &local_50;
  local_50 = lVar1;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    if (param_8 == '\0') {
      uVar2 = _CFURLRequestCreateHTTPRequest(local_48,DAT_1008c4d98,lVar1,0,local_34,*param_7);
    }
    else {
      uVar2 = _CFURLRequestCreateMutableHTTPRequest(local_48,DAT_1008c4d98,lVar1,0,local_34);
    }
    *param_2 = uVar2;
    lVar1 = local_50;
  }
  FUN_10017060f(lVar1);
  return;
}

