// name: FUN_1003848b4
// address: 1003848b4

undefined8 * FUN_1003848b4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_40 [8];
  undefined8 *local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1001aa318(param_1 + 3);
  FUN_1001aa318(param_1 + 4);
  local_38 = param_1 + 5;
  FUN_1001aa318();
  param_1[6] = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_dbID_10088c928);
  *param_1 = uVar4;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_persistentID_10088c930);
  param_1[1] = uVar4;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_remoteID_10088c938);
  param_1[6] = uVar4;
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_kind_10088c940);
  uVar2 = FUN_1003847a2(uVar2);
  *(undefined4 *)(param_1 + 2) = uVar2;
  puVar1 = PTR_s_url_10088c948;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_url_10088c948);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  if (lVar5 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar1);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_absoluteString_10088c950);
    FUN_1001aaef6(local_40,uVar6);
    FUN_1001aaadc(param_1 + 3,local_40);
    FUN_1001ab006(local_40);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  puVar1 = PTR_s_token_10088c958;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_token_10088c958);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_length_10088bdf0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (lVar5 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar1);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    FUN_1001aaef6(local_40,uVar4);
    FUN_1001aaadc(param_1 + 4,local_40);
    FUN_1001ab006(local_40);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  puVar1 = PTR_s_storeID_10088c960;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_storeID_10088c960);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_length_10088bdf0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (lVar5 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar1);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    FUN_1001aaef6(local_40,uVar4);
    FUN_1001aaadc(local_38,local_40);
    FUN_1001ab006(local_40);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return param_1;
}

