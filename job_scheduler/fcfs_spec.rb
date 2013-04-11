require File.join(File.expand_path(File.dirname(__FILE__)), "fcfs")

describe FCFS do
  describe "#average_wait_time" do
    it "should be average of time all process has to wait when job is scheduled as fcfs" do
      process_timings_1 = [{:queued_at => 0, :burst_time => 5}, {:queued_at => 0, :burst_time => 2}, {:queued_at => 0, :burst_time => 3}]
      process_timings_2 = [{:queued_at => 0, :burst_time => 2}, {:queued_at => 0, :burst_time => 1}, {:queued_at => 0, :burst_time => 6}]
      process_timings_3 = [{:queued_at => 0, :burst_time => 2}, {:queued_at => 3, :burst_time => 5}, {:queued_at => 8, :burst_time => 6}]
      process_timings_4 = [{:queued_at => 0, :burst_time => 2}, {:queued_at => 1, :burst_time => 5}, {:queued_at => 3, :burst_time => 6}]
      FCFS.average_wait_time(process_timings_1).should == (5 + 7)/ 3.0
      FCFS.average_wait_time(process_timings_2).should == (2 + 3)/ 3.0
      FCFS.average_wait_time(process_timings_3).should == 0.0
      FCFS.average_wait_time(process_timings_4).should == (1 + 3) / 3.0
    end
  end
end
