module PL_led(
    input sysclk,           //系统时钟125Mhz
    output reg [3:0]led     //4个led灯
);
    reg [31:0]timer_cnt;    //定时计数器
    
    always@(posedge sysclk)
    begin
        if(timer_cnt >= 32'd49_999_999)
        begin
            led <= ~led;
            timer_cnt <= 32'd0;
        end
        else
        begin
            led <= led;
            timer_cnt <= timer_cnt + 32'd1;
        end
    end
endmodule
