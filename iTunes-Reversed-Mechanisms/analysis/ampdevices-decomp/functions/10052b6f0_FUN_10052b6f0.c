// name: FUN_10052b6f0
// address: 10052b6f0

undefined8 * FUN_10052b6f0(undefined8 *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_48 = param_4;
  local_38 = param_1;
  (**(code **)(*param_2 + 0x20))(param_2);
  uVar4 = FUN_10015a861(param_2 + 1);
  local_40 = param_2;
  if (uVar4 != 0) {
    uVar6 = 1;
    do {
      plVar5 = (long *)FUN_10015b12c(param_2 + 1,uVar6);
      if (plVar5 != (long *)0x0) {
        cVar3 = (**(code **)(*(long *)*plVar5 + 0x38))((long *)*plVar5,param_3,local_48);
        if (cVar3 != '\0') {
          FUN_1002c3cd0(&local_58,*plVar5 + 0x68);
          local_68 = local_58;
          uStack_64 = uStack_54;
          uStack_60 = uStack_50;
          uStack_5c = uStack_4c;
          FUN_100217418(local_38,&local_68);
          plVar5 = (long *)CONCAT44(uStack_5c,uStack_60);
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          break;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= uVar4);
  }
  (**(code **)(*local_40 + 0x28))();
  return local_38;
}

