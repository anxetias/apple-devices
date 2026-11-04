// name: FUN_1001ba564
// address: 1001ba564

undefined8 *
FUN_1001ba564(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [2];
  int local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_80 = FUN_1001b8378(param_2);
  local_88 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  cVar1 = FUN_1001ba440(param_2,param_3,&local_88,local_78,0x1b1);
  if (cVar1 == '\0') {
    FUN_1001b8172(param_1,param_2);
  }
  else {
    FUN_1001ba6e0(&local_58,param_2,0,(long)local_78[0]);
    local_38 = local_58;
    local_30 = local_50;
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1001bbcfe(&local_38,param_4);
    FUN_1001ba6e0(local_68,param_2,(long)(local_70 + local_78[0]),0xffffffffffffffff);
    local_48 = local_38;
    local_40 = local_30;
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_1001bbcfe(&local_48,local_68);
    FUN_1001b80b2(param_1,&local_48);
    FUN_1001b811c(&local_48);
    FUN_1001b811c(local_68);
    FUN_1001b811c(&local_38);
    FUN_1001b811c(&local_58);
  }
  return param_1;
}

