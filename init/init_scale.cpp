/*
   Copyright (c) 2014, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <cstdlib>
#include <fstream>
#include <string>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#include "init_msm8909.h"

void init_target_properties()
{
    std::ifstream fin;
    std::string buf;

    fin.open("/proc/app_info");
    while (getline(fin, buf))
        if (buf.find("huawei_fac_product_name") != std::string::npos)
            break;
    fin.close();
    
    property_set("qemu.hw.mainkeys", "0");

    /* SCL-AL00 */
    if (buf.find("SCL-AL00") != std::string::npos) {
        property_set("ro.product.model", "SCL-AL00");
        property_set("ro.product.device", "SCL-AL00");
        property_set("ro.build.product", "SCL-AL00");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-AL00-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-AL00/hwSCL-Q:7.1.1/HuaweiSCL-AL00/C432B150:user/release-keys");
    }
    /* SCL-CL00 */
    if (buf.find("SCL-CL00") != std::string::npos) {
        property_set("ro.product.model", "SCL-CL00");
        property_set("ro.product.device", "SCL-CL00");
        property_set("ro.build.product", "SCL-CL00");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-CL00-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-CL00/hwSCL-Q:7.1.1/HuaweiSCL-CL00/C432B150:user/release-keys");
    }
    /* SCL-L01 */
    if (buf.find("SCL-L01") != std::string::npos) {
        property_set("ro.product.model", "SCL-L01");
        property_set("ro.product.device", "SCL-L01");
        property_set("ro.build.product", "SCL-L01");
        property_set("ro.build.description", "SCL-L01-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L01/hwSCL-Q:7.1.1/HuaweiSCL-L01/C432B150:user/release-keys");
    }
    /* SCL-L02 */
    if (buf.find("SCL-L02") != std::string::npos) {
        property_set("ro.product.model", "SCL-L02");
        property_set("ro.product.device", "SCL-L02");
        property_set("ro.build.product", "SCL-L02");
        property_set("ro.build.description", "SCL-L02-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L02/hwSCL-Q:7.1.1/HuaweiSCL-L02/C432B150:user/release-keys");
    }
    /* SCL-L03 */
    if (buf.find("SCL-L03") != std::string::npos) {
        property_set("ro.product.model", "SCL-L03");
        property_set("ro.product.device", "SCL-L03");
        property_set("ro.build.product", "SCL-L03");
        property_set("ro.build.description", "SCL-L03-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L03/hwSCL-Q:7.1.1/HuaweiSCL-L03/C432B150:user/release-keys");
    }
    /* SCL-L04 */
    if (buf.find("SCL-L04") != std::string::npos) {
        property_set("ro.product.model", "SCL-L04");
        property_set("ro.product.device", "SCL-L04");
        property_set("ro.build.product", "SCL-L04");
        property_set("ro.build.description", "SCL-L04-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L04/hwSCL-Q:7.1.1/HuaweiSCL-L04/C432B150:user/release-keys");
    }
    /* SCL-L21 */
    if (buf.find("SCL-L21") != std::string::npos) {
        property_set("ro.product.model", "SCL-L21");
        property_set("ro.product.device", "SCL-L21");
        property_set("ro.build.product", "SCL-L21");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-L21-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L21/hwSCL-Q:7.1.1/HuaweiSCL-L21/C432B150:user/release-keys");
    }
    /* SCL-TL00 */
    if (buf.find("SCL-TL00") != std::string::npos) {
        property_set("ro.product.model", "SCL-TL00");
        property_set("ro.product.device", "SCL-TL00");
        property_set("ro.build.product", "SCL-TL00");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-TL00-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-TL00/hwSCL-Q:7.1.1/HuaweiSCL-TL00/C432B150:user/release-keys");
    }
    /* SCL-TL10 */
    if (buf.find("SCL-TL10") != std::string::npos) {
        property_set("ro.product.model", "SCL-TL10");
        property_set("ro.product.device", "SCL-TL10");
        property_set("ro.build.product", "SCL-TL10");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-TL10-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-TL10/hwSCL-Q:7.1.1/HuaweiSCL-TL10/C432B150:user/release-keys");
    }
    /* SCL-U03 */
    if (buf.find("SCL-U03") != std::string::npos) {
        property_set("ro.product.model", "SCL-U03");
        property_set("ro.product.device", "SCL-U03");
        property_set("ro.build.product", "SCL-U03");
        property_set("ro.build.description", "SCL-U03-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-U03/hwSCL-Q:7.1.1/HuaweiSCL-U03/C432B150:user/release-keys");
    }
    /* SCL-U21 */
    if (buf.find("SCL-U21") != std::string::npos) {
        property_set("ro.product.model", "SCL-U21");
        property_set("ro.product.device", "SCL-U21");
        property_set("ro.build.product", "SCL-U21");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-U21-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-U21/hwSCL-Q:7.1.1/HuaweiSCL-U21/C432B150:user/release-keys");
    }
    /* SCL-U23 */
    if (buf.find("SCL-U23") != std::string::npos) {
        property_set("ro.product.model", "SCL-U23");
        property_set("ro.product.device", "SCL-U23");
        property_set("ro.build.product", "SCL-U23");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-U23-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-U23/hwSCL-Q:7.1.1/HuaweiSCL-U23/C432B150:user/release-keys");
    }
    /* SCL-U31 */
    if (buf.find("SCL-U31") != std::string::npos) {
        property_set("ro.product.model", "SCL-U31");
        property_set("ro.product.device", "SCL-U31");
        property_set("ro.build.product", "SCL-U31");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-U31-user 7.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-U31/hwSCL-Q:7.1.1/HuaweiSCL-U31/C432B150:user/release-keys");
    }
}
