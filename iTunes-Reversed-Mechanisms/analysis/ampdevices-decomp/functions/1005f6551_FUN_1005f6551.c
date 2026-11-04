// name: FUN_1005f6551
// address: 1005f6551

int FUN_1005f6551(uint param_1,undefined1 param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 local_480 [8];
  undefined1 local_478 [16];
  undefined8 local_468;
  char local_459;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_468 = param_4;
  if (0xf < param_1 - 1) {
    iVar3 = -0x32;
    bVar6 = false;
    pcVar4 = (char *)0x0;
    goto LAB_1005f6813;
  }
  bVar1 = (byte)param_3 & 1;
  switch(param_1) {
  case 1:
    param_3 = param_3 & 0xfffffffe;
    iVar3 = FUN_1005f6507(1000,0x80,param_3,local_458);
    pcVar4 = "iTunes Media";
    break;
  case 2:
    param_3 = param_3 & 0xfffffffe;
    iVar3 = FUN_1005f6507(1000,0x80,param_3,local_458);
    pcVar4 = "iTunes Music";
    break;
  case 3:
    iVar3 = FUN_100193150(0xffff8005,0x6d646f63,bVar1,local_458);
    pcVar4 = "TV";
    break;
  case 4:
    iVar3 = FUN_100193150(0xffff8005,0x6d646f63,bVar1,local_458);
    pcVar4 = "Videos";
    break;
  case 5:
    iVar3 = FUN_1005f6551(3,param_2,param_3,local_458);
    pcVar4 = "TV Library.tvlibrary";
    break;
  case 6:
    iVar3 = FUN_1005f6551(4,param_2,param_3,local_458);
    pcVar4 = "Videos Library.tvlibrary";
    break;
  case 7:
    iVar3 = FUN_1005f6507(1000,param_2,param_3,local_458);
    pcVar4 = "Media";
    break;
  case 8:
    iVar3 = FUN_1005f6507(1000,param_2,param_3,local_458);
    pcVar4 = "Media.localized";
    break;
  case 9:
    iVar3 = FUN_1005f6507(0x3ed,param_2,param_3,local_458);
    pcVar4 = "Automatically Add to Music";
    break;
  case 10:
    iVar3 = FUN_1005f6507(0x3ed,param_2,param_3,local_458);
    pcVar4 = "Automatically Add to Music.localized";
    break;
  case 0xb:
    pcVar4 = "Automatically Add to TV";
    pcVar5 = "Automatically Add To TV";
    goto LAB_1005f679f;
  case 0xc:
    pcVar4 = "Automatically Add to TV.localized";
    pcVar5 = "Automatically Add To TV.localized";
    goto LAB_1005f679f;
  case 0xd:
    pcVar4 = "Automatically Add to Videos";
    pcVar5 = "Automatically Add To Videos";
    goto LAB_1005f679f;
  case 0xe:
    pcVar4 = "Automatically Add to Videos.localized";
    pcVar5 = "Automatically Add To Videos.localized";
LAB_1005f679f:
    iVar3 = FUN_1005f6507(0x3ed,param_2,param_3,local_458);
    if (iVar3 != 0) goto LAB_1005f68c7;
    iVar3 = 0;
    iVar2 = FUN_1005f63db(local_458,pcVar5,param_3 & 0xfffffffe,0,local_468,0);
    bVar6 = iVar2 != 0;
    bVar7 = true;
    goto LAB_1005f6819;
  case 0xf:
    iVar3 = FUN_1005f6507(0x3f0,param_2,param_3,local_458);
    pcVar4 = "Not Added";
    break;
  case 0x10:
    iVar3 = FUN_1005f6507(0x3f0,param_2,param_3,local_458);
    pcVar4 = "Not Added.localized";
  }
  bVar6 = true;
LAB_1005f6813:
  bVar7 = iVar3 == 0;
LAB_1005f6819:
  if ((bVar7) && (bVar6)) {
    iVar3 = FUN_1005f63db(local_458,pcVar4,param_3,0,local_468,&local_459);
    if ((local_459 != '\0') && (param_1 < 0x11)) {
      if ((0x186U >> (param_1 & 0x1f) & 1) == 0) {
        if ((0x15400U >> (param_1 & 0x1f) & 1) == 0) goto LAB_1005f68c7;
        pcVar4 = "WatchFolderName.strings";
      }
      else {
        FUN_1004d59a4(local_480);
        FUN_1004d5bc0(local_468,local_480);
        FUN_1001b7a50(local_478);
        if (param_1 != 8) goto LAB_1005f68c7;
        pcVar4 = "MediaFolderName.strings";
      }
      FUN_100193afc(local_468,"com.apple.amp.library",pcVar4);
    }
  }
LAB_1005f68c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

