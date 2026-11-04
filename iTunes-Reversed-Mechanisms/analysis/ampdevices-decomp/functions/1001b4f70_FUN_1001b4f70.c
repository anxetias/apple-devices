// name: FUN_1001b4f70
// address: 1001b4f70

undefined8 * FUN_1001b4f70(double param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_78 [8];
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double local_40;
  double local_38;
  
  local_40 = param_1;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
  (**(code **)(*param_3 + 0x78))(&local_68,param_3);
  cVar4 = _NSIsEmptyRect();
  puVar3 = PTR_s_size_10088c220;
  if (cVar4 == '\0') {
    local_38 = local_58;
  }
  else {
    local_38 = (double)(*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_size_10088c220);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar3);
    local_68 = 0;
    uStack_60 = 0;
  }
  local_58 = local_38;
  if ((local_40 == DAT_100700458) && (!NAN(local_40) && !NAN(DAT_100700458))) {
    local_38 = local_38 / local_40;
  }
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (SUB84(local_38,0),uVar6,PTR_s_tintedImageWithSize_fromRect_wit_10088c228,uVar5)
  ;
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar8 != 0) {
    FUN_1001b4e36(local_78,lVar8);
    FUN_100217418(param_2,local_78);
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  puVar3 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar8);
  (*(code *)puVar3)(uVar6);
  (*(code *)puVar3)(uVar5);
  return param_2;
}

