// name: FUN_1001b3986
// address: 1001b3986

void FUN_1001b3986(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_1001b7a5c(local_40);
  lVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (lVar3 == 0) goto LAB_1001b3b47;
  FUN_1001b7b04(local_30,".png");
  cVar2 = FUN_1001ba432(local_40,local_30,0x1b1);
  FUN_1001b7a50(local_30);
  puVar1 = PTR__kUTTypePNG_10082e568;
  puVar8 = (undefined8 *)puVar1;
  if (cVar2 == '\0') {
    FUN_1001b7b04(local_30,".jpeg");
    cVar2 = FUN_1001ba432(local_40,local_30,0x1b1);
    if (cVar2 == '\0') {
      FUN_1001b7b04(local_50,".jpg");
      cVar2 = FUN_1001ba432(local_40,local_50,0x1b1);
      FUN_1001b7a50(local_50);
      FUN_1001b7a50(local_30);
      puVar8 = (undefined8 *)PTR__kUTTypeJPEG_10082e550;
      if (cVar2 == '\0') {
        FUN_1001b7b04(local_30,".png");
        FUN_1001bbcfe(local_40,local_30);
        FUN_1001b7a50(local_30);
        puVar8 = (undefined8 *)puVar1;
      }
    }
    else {
      FUN_1001b7a50(local_30);
      puVar8 = (undefined8 *)PTR__kUTTypeJPEG_10082e550;
    }
  }
  uVar7 = *puVar8;
  uVar4 = FUN_1001b83ae(local_40);
  uVar5 = FUN_1001b83f0(local_40);
  lVar3 = _CFURLCreateFromFileSystemRepresentation(0,uVar4,uVar5,0);
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006a1087(uVar7);
    }
LAB_1001b3b2b:
    lVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar6 = _CGImageDestinationCreateWithURL(lVar3,uVar7,1,0);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_1006a1011(uVar7);
      }
      goto LAB_1001b3b2b;
    }
    _CGImageDestinationAddImage(lVar6,param_1[9],0);
    _CGImageDestinationFinalize(lVar6);
  }
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar3);
LAB_1001b3b47:
  FUN_1001b7a50(local_40);
  return;
}

