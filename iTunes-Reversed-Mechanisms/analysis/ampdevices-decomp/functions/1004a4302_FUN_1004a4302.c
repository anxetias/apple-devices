// name: FUN_1004a4302
// address: 1004a4302

void FUN_1004a4302(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_40 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar4 = (*(code *)puVar2)(param_3);
  _dispatch_group_enter(*(dispatch_group_t *)(param_1 + 0x20));
  local_38 = uVar4;
  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_isVideo_10088cab8);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (cVar3 == '\0') {
    local_50 = *(undefined8 *)PTR__PHImageManagerMaximumSize_10082b570;
    local_48 = *(undefined8 *)(PTR__PHImageManagerMaximumSize_10082b570 + 8);
    local_58 = *(undefined8 *)(param_1 + 0x40);
    local_98 = PTR___NSConcreteStackBlock_10082caf0;
    local_90 = 0xc2000000;
    local_88 = FUN_1004a457c;
    local_80 = &DAT_10085ce08;
    local_78 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x38));
    local_70 = (*(code *)puVar2)(local_40);
    uVar5 = (*(code *)puVar2)(local_38);
    local_68 = uVar5;
    local_60 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_10082c770)
              (local_50,local_48,uVar4,PTR_s_requestImageForAsset_targetSize__10088d420,uVar5,0,
               local_58,&local_98);
    puVar6 = &local_78;
    puVar7 = &local_70;
    puVar8 = &local_68;
    (*(code *)PTR__objc_release_10082c7b0)(local_60);
    uVar5 = local_38;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    local_d0 = PTR___NSConcreteStackBlock_10082caf0;
    local_c8 = 0xc2000000;
    local_c0 = FUN_1004a454c;
    local_b8 = &DAT_10085cdd8;
    local_b0 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x38));
    local_a8 = (*(code *)puVar2)(local_40);
    local_a0 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x20));
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_requestURLForVideo_options_resul_10088d408,local_38,uVar1,&local_d0);
    puVar6 = &local_b0;
    puVar7 = &local_a8;
    puVar8 = &local_a0;
  }
  puVar2 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(*puVar8);
  (*(code *)puVar2)(*puVar7);
  (*(code *)puVar2)(*puVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(local_40);
  return;
}

