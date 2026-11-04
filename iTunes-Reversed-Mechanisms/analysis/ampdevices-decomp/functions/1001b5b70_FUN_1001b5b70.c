// name: FUN_1001b5b70
// address: 1001b5b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1001b5b70(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_10;
  
  local_28 = (undefined4)*param_2;
  uStack_20 = (undefined4)param_2[1];
  local_18 = (undefined4)_DAT_10070e4f0;
  uStack_10 = (undefined4)_UNK_10070e4f8;
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x48),
                     PTR_s_hitTestRect_withImageDestination_10088c268,0,0,1,param_6,local_28,
                     uStack_20,local_18,uStack_10,*param_3,param_3[1],param_3[2],param_3[3]);
  return cVar1 != '\0';
}

