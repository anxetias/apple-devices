// name: FUN_100411596
// address: 100411596

undefined4 FUN_100411596(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar4 = (*(code *)puVar1)(param_3);
  cVar2 = FUN_1004100f4(uVar3);
  puVar1 = PTR_s_isEqualToString__10088bb98;
  uVar5 = 0x6be;
  if (cVar2 != '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar4,PTR_s_isEqualToString__10088bb98,&cf_peopleAlbum);
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_TopLevelAlbums);
      uVar5 = 0x6be;
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
    }
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return uVar5;
}

