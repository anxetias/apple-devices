// name: FUN_100593c7d
// address: 100593c7d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100593c7d(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "metaDataDictionary != nullptr";
LAB_100593f73:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      local_50 = 0.0;
      lVar3 = FUN_100166b7f(param_1,*(undefined8 *)PTR__kCGImagePropertyExifDictionary_10082e858);
      if (lVar3 == 0) goto LAB_100593ebe;
      lVar4 = FUN_100166c1b(lVar3,*(undefined8 *)PTR__kCGImagePropertyExifDateTimeOriginal_10082e850
                           );
      if (lVar4 == 0) {
        lVar4 = FUN_100166c1b(lVar3,*(undefined8 *)
                                     PTR__kCGImagePropertyExifDateTimeDigitized_10082e848);
        if (lVar4 != 0) goto LAB_100593d07;
        lVar3 = FUN_100166b7f(param_1,*(undefined8 *)PTR__kCGImagePropertyTIFFDictionary_10082e8b0);
        if (lVar3 != 0) {
          lVar4 = FUN_100166c1b(lVar3,*(undefined8 *)PTR__kCGImagePropertyTIFFDateTime_10082e8a8);
          if (lVar4 != 0) goto LAB_100593d07;
        }
LAB_100593ebe:
        lVar3 = 0;
        iVar2 = 0;
      }
      else {
LAB_100593d07:
        lVar3 = FUN_1001737e5(DAT_1008c4d90,0,lVar4);
        if (lVar3 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "dateTimeMutableString != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          lVar3 = 0;
          FUN_1001782e9(0,0);
          iVar2 = -0x6c;
        }
        else {
          lVar4 = FUN_100173e8c(lVar3,&cf__,&cf__,0,10,0);
          if (lVar4 == 2) {
            iVar2 = FUN_1001a4bc3(lVar3,&local_50);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                iVar2 = 0;
                if ((DAT_100759408 <= local_50) && (local_50 <= _DAT_100759410)) {
                  dVar6 = local_50 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
                  iVar2 = FUN_100178263();
                  *param_2 = (int)(long)dVar6 - iVar2;
                  iVar2 = 0;
                }
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x400;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,
                                      0x12);
                }
              }
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = 
              "JRCFStringFindAndReplace( dateTimeMutableString, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \":\" \"\")), ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"-\" \"\")), CFRangeMake( 0, 10 ), kNilOptions ) == 2"
              ;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x32;
          }
        }
      }
      FUN_10017060f(lVar3);
      goto LAB_100593ecb;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "outExposureDate != nullptr";
      goto LAB_100593f73;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100593ecb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

