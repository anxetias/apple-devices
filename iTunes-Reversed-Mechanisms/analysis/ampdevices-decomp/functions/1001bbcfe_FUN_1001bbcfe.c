// name: FUN_1001bbcfe
// address: 1001bbcfe

long * FUN_1001bbcfe(long *param_1,long *param_2)

{
  size_t *psVar1;
  size_t *psVar2;
  size_t sVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  long local_40;
  long local_38;
  
  if (param_2 == param_1) {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1001bbcfe(param_1,&local_40);
    FUN_1001b811c(&local_40);
  }
  else {
    lVar4 = *param_1;
    if (lVar4 == 0) {
      psVar1 = (size_t *)param_1[1];
      if (psVar1 == (size_t *)0x0) {
        FUN_1001b8172(param_1,param_2);
      }
      else {
        psVar2 = (size_t *)param_2[1];
        if (psVar2 == (size_t *)0x0) {
          if (*param_2 == 0) {
            return param_1;
          }
          FUN_1001b87d0(param_2);
          puVar8 = &DAT_100711b02;
          if (param_2[1] != 0) {
            puVar8 = (undefined *)(param_2[1] + 0xc);
          }
          uVar6 = FUN_1001b83f0(param_2);
          plVar5 = (long *)FUN_1001bcb60(psVar1,puVar8,uVar6);
        }
        else {
          lVar4 = *psVar2 + *psVar1;
          plVar5 = operator_new(*psVar2 + *psVar1 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
          *plVar5 = lVar4;
          *(undefined4 *)(plVar5 + 1) = 1;
          *(undefined1 *)((long)plVar5 + lVar4 + 0xc) = 0;
          sVar3 = *psVar1;
          _memcpy((void *)((long)plVar5 + 0xc),(void *)((long)psVar1 + 0xc),sVar3);
          _memcpy((void *)((long)plVar5 + sVar3 + 0xc),(void *)((long)psVar2 + 0xc),*psVar2);
        }
        FUN_1001b811c(param_1);
        param_1[1] = (long)plVar5;
      }
    }
    else {
      if (*param_2 == 0) {
        if (param_2[1] == 0) {
          return param_1;
        }
        FUN_1001b8454(param_2);
        puVar7 = &DAT_100711b00;
        if (*param_2 != 0) {
          puVar7 = (undefined2 *)(*param_2 + 0xc);
        }
        uVar6 = FUN_1001b8378(param_2);
        lVar4 = FUN_1001bcf4c(lVar4,puVar7,uVar6);
      }
      else {
        lVar4 = FUN_1001bce8e(lVar4);
      }
      FUN_1001b811c(param_1);
      *param_1 = lVar4;
    }
  }
  return param_1;
}

